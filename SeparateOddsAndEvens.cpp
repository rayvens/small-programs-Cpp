#include <iostream>
#include <array>
#include <string>
void separateoddsandevens(const int arr[], std::size_t sizearr,
    int** odds, std::size_t* oddsn, int** evens, std::size_t* evenn )
{
    *oddsn = 0;
    *evenn = 0;
    for (std::size_t i = 0; i < sizearr; ++i){
        if (arr[i]%2 == 1) { ++(*oddsn); } else { ++(*evenn); }
    }
       *odds = new int[*oddsn];
       *evens = new int[*evenn];
      
    std::size_t oddpos = 0, evenpos = 0;
    for (std::size_t i = 0; i < sizearr; ++i ){
       if (arr[i]%2 == 1) { (*odds)[oddpos++] = arr[i]; } else { (*evens)[evenpos++] = arr[i]; }



    }



}


int main(){
    int fullarray[] = {1,5,8,6,4,2,5,5,9,8,7};
    int* oddsarray  = nullptr;
    int* evensarray = nullptr;
     std::size_t nodds = 0, nevens = 0;
    separateoddsandevens(fullarray, std::size(fullarray), &oddsarray, &nodds, &evensarray, &nevens);

    for (std::size_t i = 0; i < nodds; ++i){
        std::cout<< (*oddsarray) <<" "; 
         ++oddsarray;
        }
     std::cout<<'\n';
    for (std::size_t i = 0; i < nevens; ++i){
        std::cout<< (*evensarray) <<" "; 
        ++evensarray;
        }
     std::cout<<std::flush;

    delete[] oddsarray; oddsarray = nullptr;
    delete[] evensarray; evensarray = nullptr;

}
