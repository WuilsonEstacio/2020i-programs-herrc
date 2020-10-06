# include <iostream>
# include <cstdlib>
# include <cmath>
# include <cstdio>
# include <iomanip>


double sumup(int N){
  double S=0;
  for(int i=1; i<=N; i++){
    S += (1.0)/(i*i);

  }
  return S;
}
double sumdown(int N){
  double F=0;
  for(int j=N; 1<=j; j--){
    F += (1.0)/(j*j);

  }
  return F;
  
}
  
int main(int arg, char **argv){
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  const double exact = M_PI*M_PI/6.0;
  const int NMAX = std::atoi(argv[1]);
  double df = std::fabs(sumup(NMAX)-exact)/exact;
  double dg = std::fabs(sumdown(NMAX)-exact)/exact;
  std::cout << df << '\t' << dg << '\t' << sumup(NMAX)  << '\t' << sumdown(NMAX) << std::endl;

  return 0;
  
}

