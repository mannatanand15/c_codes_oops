// You are using GCC
#include<stdio.h>
struct waterfall{
  double w;
  double h;
  double d;
};
float volume(struct waterfall s){
    double total=s.w*s.h*s.d;
    printf("%.2f cubic meters\n",total);
}
float surface(struct waterfall s){
    float area=2*(s.w*s.h+s.w*s.d+s.h*s.d);
    printf("%.2f square meters",area);
}

int main(){
    struct waterfall s;
    scanf("%lf %lf %lf",&s.w,&s.h,&s.d);
    volume(s);
    surface(s);
}
