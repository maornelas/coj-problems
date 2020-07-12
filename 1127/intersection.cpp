#include<cstdio>  
#include<cstring>  
#include<iostream>  
#include<algorithm>  

using namespace std;  
typedef double mType;  

/***/  
struct Tpoint  {  
    mType x,y;  
    Tpoint(){}  
    Tpoint(mType _x,mType _y):x(_x),y(_y){}  
};  

/***/  
struct Tsegment  {  
    Tpoint start,end;  
    Tsegment(){}  
    Tsegment(Tpoint _start,Tpoint _end):start(_start),end(_end){}  
    Tsegment(mType sx,mType sy,mType tx,mType ty):start(sx,sy),end(tx,ty){}  
};  

struct Trectangle  {  
    mType l,r,b,t;  
    Trectangle(){}  
    Trectangle(mType _l,mType _r,mType _b,mType _t):l(_l),r(_r),b(_b),t(_t){}  
};  

Tpoint MakeVector(Tpoint P,Tpoint Q)  {  
    return Tpoint(Q.x-P.x,Q.y-P.y);  
}  


/**PQPQ*/  
mType CrossProduct(Tpoint P,Tpoint Q)  {  
    return P.x*Q.y-P.y*Q.x;  
}  

/**QPQR? 
*  : >0 , <0 , 
*/  
mType MultiCross(Tpoint P,Tpoint Q,Tpoint R)  {  
    return CrossProduct(MakeVector(Q,P),MakeVector(Q,R));  
}  

/**PQ*/  
bool IsIntersect(Tsegment P,Tsegment Q)  {  
    if(max(P.start.x,P.end.x)<min(Q.start.x,Q.end.x)||max(Q.start.x,Q.end.x)<min(P.start.x,P.end.x)||  
        max(P.start.y,P.end.y)<min(Q.start.y,Q.end.y)||max(Q.start.y,Q.end.y)<min(P.start.y,P.end.y))return 0;  
    return (MultiCross(P.end,P.start,Q.start)*MultiCross(P.end,P.start,Q.end)<=0&&  
            MultiCross(Q.end,Q.start,P.start)*MultiCross(Q.end,Q.start,P.end)<=0);  
}  

mType sx,sy,ex,ey,l,r,t,b;  
Tsegment P;  
Trectangle Q;  
int n;  

bool IsSegRectInter(Tsegment P,Trectangle Q)  {  
    if(Q.l<=P.start.x&&P.start.x<=Q.r&&Q.b<=P.start.y&&P.start.y<=Q.t)return 1;  
    if(Q.l<=P.end.x&&P.end.x<=Q.r&&Q.b<=P.end.y&&P.end.y<=Q.t)return 1;  
    if(IsIntersect(P,Tsegment(Q.l,Q.t,Q.r,Q.b)))return 1;  
    if(IsIntersect(P,Tsegment(Q.l,Q.b,Q.r,Q.t)))return 1;  
    return 0;  
}  

int main()  {  
    while(~scanf("%d",&n))  
        while(n--){  
            scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&sx,&sy,&ex,&ey,&l,&t,&r,&b);  
            if(t<b)swap(t,b);  
            if(r<l)swap(r,l);  
            P=Tsegment(sx,sy,ex,ey);  
            Q=Trectangle(l,r,b,t);  
            puts(IsSegRectInter(P,Q)?"T":"F");  
        }  
    return 0;  
} 
