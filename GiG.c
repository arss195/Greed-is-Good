int score(const int dice[5]) {
  int sum[6] = {0,0,0,0,0,0};
  int i;
  int score = 0;
  
for (i=0; i < 5; i++)
  switch (dice[i])
  {
    case 1: sum[0]++; break;
    case 2: sum[1]++; break;
    case 3: sum[2]++; break;
    case 4: sum[3]++; break;
    case 5: sum[4]++; break;
    case 6: sum[5]++; break;
  }
  
  if (sum[0]>=3)
  {
    score+=1000;
    sum[0]-=3;
  }
  if (sum[1]>=3)
    score+=200;
  if (sum[2]>=3)
    score+=300;
  if (sum[3]>=3)
    score+=400;
  if (sum[4]>=3)
  {
    score+=500;
    sum[4]-=3;
  }
  if (sum[5]>=3)
    score+=600;
  return(score+sum[0]*100+sum[4]*50);
}
