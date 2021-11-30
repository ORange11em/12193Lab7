double adiff(double a,double b){
  while (a > 360){
    a -=360;
  }
  while (b > 360){
    b -=360;
  }
  if (a > b){
    return a-b;
  }
  if (b > a){
    return b-a;
  }
  
}