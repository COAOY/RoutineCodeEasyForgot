
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main(int argc, char** argv)
{

    /*  
      argc: # of input elemnets
      ex:
        foo input_file out_file
        > argc = 3
      argv: two dimension array to store input elements
            each sub array is a element in input sequence
      ex:
        foo input_file out_file
        > argv[0]= foo
        > argv[1]= input_file
    */
    
    
// template1

    vector<char> arr;
	  char reg
    fstream FILEIN,FILEOUT;
	  FILEIN.open(argv[1],ios::in);
    if(FILEIN.good())
		  printf("Open Succes\n");
	  else
		  printf("Open File\n");
	  while(!FILEIN.eof())
	  {
		  FILEIN >> reg;
		  arr.push_back(reg);
	  }
	  FILEIN.close();
	  FILEOUT.open(argv[2],ios::out);
	  if(FILEOUT.good())
		  printf("Open Succes\n");
	  else
		  printf("Open File\n");
	  for(auto &x:arr)
		  FILEOUT << x;
	  FILEOUT.close();
    
 //  template2   
    ifstream FILEIN(argv[1], ios::out);
	  if(FILEIN)
		  printf("Open Succes\n");
	  else
		  printf("Open File\n");
	  while(FILEIN >> reg){
		  arr.push_back(reg);
	  }
	  FILEIN.close();
	
	  ofstream FILEOUT(argv[2], ios::in);
	  if(FILEOUT)
		  printf("Open Succes\n");
	  else
		  printf("Open File\n");
	  for(auto &x:arr)
	  {
		  FILEOUT << x;
	  }
	  FILEOUT.close();
}
