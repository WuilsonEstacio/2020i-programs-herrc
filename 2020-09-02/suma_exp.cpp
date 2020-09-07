# include <iostream>
# include <cstdlib>

typedef float Real;

Real suma(Real x, int Nmax);
int main(int argc, char *argv[]){
    
  std::cout.precision(7);
  std::cout.setf(std::ios::scientific);
  Real xval= std::atof(argv[1]);
  int N= std::atoi(argv[2]);
 
  std::cout<< suma(xval,N) <<"\n";
  
  return 0;
}

Real suma(double x, int Nmax){
  
  Real sum = 1.0;
  //a_n=(-x)^n/n!;
  //a_{n+1}=(-x)^{n+1}/(n+1)!=(-x)*(-x)^{n}/(n!*(n+1)!)=a_n *(-x)/(n+1)
  Real term= 1.0;

  for(int ii = 2; ii < Nmax; ++ii){
    term = term*(-x)/(ii + 1);
    sum = sum + term;
  }
  return sum;

}
