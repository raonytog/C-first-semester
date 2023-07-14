#define pi 3.141592
int main () {
  float raio, meioRaio, area;
  
  scanf("%f", &raio);
  
  area = (pi * raio * raio);
  meioRaio = sqrt((area/2)/pi);
  
  printf("%.2f %.2f", area, meioRaio);
  return 0;
}
