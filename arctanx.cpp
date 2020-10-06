# include <iostream>
# include <cstdlib>
# include <cmath>
# include <stdlib.h>
# include <iomanip>
# include <string.h>

double myatan(double x , int n ){

  double a = std::pow(2,-n/2);
  double b = x/(1+std::sqrt(1+std::pow(x,2)));
  double c = 1;
  double d = 1;
  

  while(1-a> std::pow(2,-n)){
    c = 2*c/(1+a);
    d = (2*a*b)/(1+std::pow(b,2));
    d = d/(1+std::sqrt(1+std::pow(d,2)));
    d=(b+d)/(1-b*d);
    b=(d)/(1+std::sqrt(1+std::pow(d,2)));
    a = 2+std::sqrt(a)/(1+a);

  }
  return c*std::log((1+b)/(1-b));
  
}


int main(int arg, char **argv){
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  
  const int NSTEPS =std::atoi(argv[1]); // define el valor 1 de NSTEPS
  const double x = std::atof(argv[2]);  // d valor 2 de x
  const double exact = std::atan(x);   //  d valor de exact
  double my = myatan(x , NSTEPS);      //  d valor de my
  double diff = std::fabs(my-exact)/exact;


  std::cout << diff << '\t'<< exact << '\t' << my << std::endl;

  return 0;
  
}
