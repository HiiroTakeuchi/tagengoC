#include <stdio.h>



int main()
{
    int x = 0;
 int m_sum,p_sum,sum_max,m_max,m_min,p_max,p_min;
 float m_ave,p_ave;
 m_sum = p_sum = sum_max = m_ave = m_max = p_ave = p_max = 0;
 p_min = m_min = 999; 
 char p = 'z';
 char s[] = "ABCDE"; 
 int score[5] = {
   72,88,72,81,68
   };
 int score2[5] = 
    {48,39,91,82,78};
    
 for(x=0;x<5;++x) 
 {
   if (m_max<score[x]){
   m_max = score[x];
   }
   if (m_min>score[x]){
   m_min = score[x];
   }
   if (p_max<score2[x]){
   p_max = score2[x];
   }
   if (p_min>score2[x]){
   p_min = score2[x];
   }
   if (sum_max<score[x] + score2[x]){
   sum_max =score[x] + score2[x];
   p =s[x];
   
   }
   m_sum = m_sum + score[x];
   p_sum = p_sum + score2[x];

 printf("\n%cさんの成績\n数学:%d\n物理:%d\n",s[x],score[x],score2[x]);

 };
 m_ave = m_sum/5;
 p_ave = p_sum/5;
 printf("\n数学\n最大点:%d\n最小点:%d\n平均点:%f\n",m_max,m_min,m_ave);
 printf("\n物理\n最大点:%d\n最小点:%d\n平均点:%f\n",p_max,p_min,p_ave);
 printf("\n合計が最も高いのは%cさん\n合計:%d",p,sum_max);
 return 0;
}
