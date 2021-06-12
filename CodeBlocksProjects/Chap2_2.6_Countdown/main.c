#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hh1,mm1,ss1,hh2,mm2,ss2,t1,t2;
    scanf("%d:%d:%d",&hh1,&mm1,&ss1);
    scanf("%d:%d:%d",&hh2,&mm2,&ss2);
    t1 = hh1*60*60 + mm1*60 +ss1;
    t2 = hh2*60*60 + mm2*60 +ss2;
    printf("The duration is %dhours %dminutes %dseconds.",(t2-t1)/3600,(t2-t1)%3600/60,(t2-t1)%3600%60);
    return 0;
}



//(t2-t1-(t2-t1)/3600*60*60-(t2-t1-(t2-t1)/3600*60*60)/60*60)
//ss:    (t2-t1)%3600%60)  表示去掉小时，去掉分钟

//mm:    t%3600/60 =  (t2-t1-(t2-t1)/3600*60*60)/60
