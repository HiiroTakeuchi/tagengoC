#include <stdio.h>
#include <string.h>



int main()
{
    int x = 0;
 double m_sum,p_sum,sum_max,m_max,m_min,p_max,p_min;
 double m_ave,p_ave;
 m_sum = p_sum = sum_max = m_ave = m_max = p_ave = p_max = 0;
 p_min = m_min = 999; 
 char p = 'z';
 char s[] = "A""B""C""D""E"; 
 int y = strlen(s);
int score[2][5] = {{
   72,88,72,81,68
   },
    {48,39,91,82,78}
 };
    
 for(x=0;x<y;++x) 
 {
   if (m_max<score[0][x]){
   m_max = score[0][x];
   }
   if (m_min>score[0][x]){
   m_min = score[0][x];
   }
   if (p_max<score[1][x]){
   p_max = score[1][x];
   }
   if (p_min>score[1][x]){
   p_min = score[1][x];
   }
   if (sum_max<score[0][x] + score[1][x]){
   sum_max =score[0][x] + score[1][x];
   p =s[x];
   
   }
   m_sum = m_sum + score[0][x];
   p_sum = p_sum + score[1][x];

 printf("\n%cさんの成績\n数学:%d\n物理:%d\n",s[x],score[0][x],score[1][x]);

 };
 m_ave = m_sum/y;
 p_ave = p_sum/y;
 printf("\n数学\n最大点:%lf\n最小点:%lf\n平均点:%lf\n",m_max,m_min,m_ave);
 printf("\n物理\n最大点:%lf\n最小点:%lf\n平均点:%lf\n",p_max,p_min,p_ave);
 printf("\n合計が最も高いのは%cさん\n合計:%lf",p,sum_max);
 return 0;
}
