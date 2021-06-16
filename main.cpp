#include <iostream>
#include <fstream>


int main(int argc, char **argv){
       bool pk = true;
    int op=0;
    std::cout<<"PROGRAM EXERCISE WITH IO STUFF\n";
  
    while (pk){
    std::cout<<"[1]WRITE\n[2]READ";
    std::cin>>op;

    if (op == 1){
     std::ofstream Twrite;
     int p = 0;
     std::cout<<"[1]add to file\n[2]overwrite";
     std::cin>>p;

         if (p == 1){ Twrite.open("file1.txt",std::ios::app); }
         if (p == 2){ Twrite.open("file1.txt",std::ios::trunc); }
         if (!Twrite){ std::cout<<"fail to read file!"; return -2; }
         std::string put;
         while (std::getline(std::cin,put)){
            if (put == "end"){break;}
            std::cout<<"\n>>";
            Twrite<<put <<"\n";
           }
        std::cout<<"\nDone!\nEnd program?";
        std::cin>>pk;
    }else if(op == 2){
        std::ifstream Tread;
        std::string put;
        Tread.open("file1.txt");
        if (!Tread) { std::cerr<<"Error opening the file"; return -2; }

        while (std::getline(Tread, put))
          std::cout<<put <<"\n";
    
    
    }
    
    
    }


  
}

