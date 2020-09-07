# include <iostream>
# include <cstdlib>

int main(int argc, char *argv[]){
  // argc: cuenta el numero de argumentos en la linea de comandos.
  //argv: guarda los valores de esos argumentos
  // std::cout << argc << "\n";
  // std::cout << argv[0] << "\n";
  // std::cout << argv[1] << "\n";
  
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);
  int N= std::atoi(argv[1]);
  float eps =1.0;
  float one =1.0;

  for(int ii=0; ii<N; ii++){
    eps = eps/2.0;
    one = 1.0 + eps;
    std::cout<<ii
	     <<"\t"<< one
	     <<"\t"<< eps
	     <<"\n";
  }
  return 0;
}
