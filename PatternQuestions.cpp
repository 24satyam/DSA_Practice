#include <iostream>
using namespace std;
int main() {
  
  
  // Solid Rerctangle 
  // int n;
  //    int m;
  // std::cin >> n ;
  // std::cin >> m ;
  // for(int row = 0; row< n ;row++){


  //     for(int col = 0 ; col< m ; col++){
  //       std::cout << "*";
  //     }

  //   std::cout<< endl;
  // }


  //SQUARE PATTERN
  // 8
  // * * * * * * * * 
  // * * * * * * * * 
  // * * * * * * * * 
  // * * * * * * * * 
  // * * * * * * * * 
  // * * * * * * * * 
  // * * * * * * * * 
  // * * * * * * * * 

  // int n;
  // cin >> n;

  // for(int row = 0 ; row<n;row++){
  //   for(int col = 0; col < n; col++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }
  
 // HOLLOW SQUARE
  // 6
  // 6
  // ******
  // *    *
  // *    *
  // *    *
  // *    *
  // ******
  // int n ;
  // int m ;
  // cin>> n;
  // cin>> m;

  // for(int row = 0 ; row < n; row++){
  //   for(int col = 0 ; col<m ;col++){
  //     if(row == 0 || row == (n-1)){
  //       cout<<"*";
  //     }
  //     else if(col == 0 || col == m-1){
  //       cout<< "*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<< endl;
  // }

  //HALF PYRAMID
  // 4
  // *
  // **
  // ***
  // ****
  
  // int n;
  // cin >> n;

  // for(int row = 0; row < n; row++){
  //   for(int col = 0; col < row+1 ; col++ ){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  //INVERTED HALF PYRAMID
  // 8
  // ********
  // *******
  // ******
  // *****
  // ****
  // ***
  // **
  // *
  // int n;
  // cin>>n;

  // for(int row = 0; row < n; row++ ){
  //   for(int col = 0; col < n-row ; col++){
  //     cout << "*";
      
  //   }
  //   cout<< endl;
  // }

  //NUMERIC HALF PYRAMID
  // 4
  // 1
  // 12
  // 123
  // 1234
  
  // int n;
  // cin >> n;

  // for(int row = 0 ; row < n;row++){
  //   for(int col = 0 ; col < row+1 ; col++){
  //     cout<< col+1;
  //   }
  //   cout << endl;
  // }
  
  //INVERTED NUMERIC HALF PYRAMID
  // 5
  // 12345
  // 1234
  // 123
  // 12
  // 1
  
  // int n;
  // cin >> n;
  // for(int row = 0; row < n; row++){

  //   for(int col = 0;col<n-row;col++){
  //     cout<<col+1;
  //   }
  //   cout<<endl;
    
  // }



  //HOLLOW INVERTED HALF PYRAMID
  // 6
  // ******
  // *   *
  // *  *
  // * *
  // **
  // *
  // int n;
  // cin>>n;
  // for(int row = 0 ; row < n; row++){
  //   for(int col = 0 ; col<n-row ;col++){
  //     if(row == 0 || col == 0 || col == n-row-1){
  //       cout<<"*";
  //     }
  //     // else if(col == 0 || col == n-row-1){
  //     //   cout<< "*";
  //     // }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<< endl;
  // }



  //HOLLOW PYRAMID
//   6
//      *
//     * *
//    *   *
//   *     *
//  *       *
// ***********


  
  // int n;
  // cin >> n;

  // for(int row = 0; row < n; row++){

  //   for(int j = 0; j<n-row-1;j++){
  //     cout<<" ";
  //   }
    
  //   for(int col = 0; col<2*row+1;col++){
      
  //     if(row==n-1||col==0||col==2*row)
  //     {
  //       cout<<"*";
  //     }  
  //     else{
  //       cout<<" ";
  //     }
  //   }
    
  //   cout<<endl;
    
  // }

  //FULL PYRAMID PATTERN
 //  6
 //      *
 //     ***
 //    *****
 //   *******
 //  *********
 // ***********

  // int n;
  // cin >> n;

  // for(int row = 0;  row < n; row++){
  //   for(int j = 0;j < n-row; j++){
  //     cout<< " ";
  //   }
  //   for(int j = 0;j < 2*row+1; j++){
  //     cout<< "*";
  //   }
  //   cout<< endl;

  // }

// FULL PYRAMID WITH SPACES
// 6
//       * 
//      * * 
//     * * * 
//    * * * * 
//   * * * * * 
//  * * * * * * 
  
  // int n;
  // cin >> n;
  // for(int row = 0; row < n; row++){
  //     for(int j = 0;j < n-row-1; j++){
  //       cout<< " ";
  //     }

  //     for(int col = 0; col < row+1 ; col++){
  //       cout<< "* ";
  //     }

  //   cout<<endl;

    
  // }


  //INVERTED FULL PYRAMID
//   6
// * * * * * * 
//  * * * * * 
//   * * * * 
//    * * * 
//     * * 
//      * 
  
  // int n;
  // cin >> n;

  // for(int row = 0; row < n ; row++){
  //   for(int j = 0;j < row;j++){
  //     cout<<" ";
  //   }
  //   for(int col = 0;col < n-row;col++){
  //     cout<<"* ";
  //   }

  //   cout<<endl;
    
  // }

  // SOLID DIAMOND PATTERN

// 6
//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
// * * * * * * 
// * * * * * * 
//  * * * * * 
//   * * * * 
//    * * * 
//     * * 
//      * 
  

  // int n;
  // cin>>n;

  // for(int row = 0; row < n; row++){

  //   for(int col = 0 ; col < n -row-1; col++){
  //     cout<< " ";
  //   }

  //   for(int col = 0; col < row + 1; col++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
    
  // }
  // for(int row = 0; row < n; row++){

  //   for(int col = 0 ; col < row; col++){
  //     cout<< " ";
  //   }

  //   for(int col = 0; col < n-row; col++){
  //     cout<<"* ";
  //   }

  //   cout<<endl;
    
  // }



//HOLLOW DIAMOND
// 6
//      *
//     * *
//    *   *
//   *     *
//  *       *
// *         *
// *         *
//  *       *
//   *     *
//    *   *
//     * *
//      *
  
  // int n;
  // cin>>n;
  // for(int row = 0; row < n; row++){
  //     for(int col = 0; col < n- row -1; col++){
  //       cout<<" ";
  //     }

  //     for(int col = 0; col < 2*row+1; col++){
  //       if(col==0||col==2*row){
  //         cout<<"*";
  //       }else{
  //         cout<<" ";
  //       }
  //     }
  //   cout<< endl;
  // }

  
  // for(int row = 0; row < n; row++){
  //     for(int col = 0; col < row; col++){
  //       cout<<" ";
  //     }
    
  //     for(int col = 0; col < 2*(n-row-1)+1; col++){
  //       if(col==0||col==2*(n-row-1)){
  //         cout<<"*";
  //       }else{
  //         cout<<" ";
  //       }
  //     }

  //   cout<< endl;
  // }


//FLIPPED SOLID DIAMOND

//   5
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****
  
  // int n;
  // cin >> n;
  // for(int row = 0 ; row < n;row++){


  //   for(int col = 0;col<n-row;col++){
  //     cout<<"*";
  //   }
  //   for(int col = 0;col< 2*row+1;col++){
  //       cout<<" ";
      
  //     }

  //   for(int col = 0; col < n-row;col++){
  //     cout<<"*";
  //   }
  //   cout<<endl;

  // }
  // for(int row = 0 ; row < n;row++){


  //   for(int col = 0;col<row+1;col++){
  //     cout<<"*";
  //   }
  //   for(int col = 0;col<2*(n-row-1)+1;col++){
  //       cout<<" ";
      
  //     }

  //   for(int col = 0; col < row+1;col++){
  //     cout<<"*";
  //   }
  //   cout<<endl;

  // }

  //FANCY PATTERN 2

//   4
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1

    // int n;
    // cin>>n;
    // for(int row = 0; row < n;row++){
    //   for(int col = 0; col < row + 1;col++){
    //     cout << row +1;
    //     if(col != row)  
    //       cout << "*";
    //   }
    //   cout<<endl;
      
    // }
    // for(int row = 0; row < n;row++){
    //   for(int col = 0; col < n-row;col++){
    //     cout << n-row;
    //     if(col != n-row-1)  
    //       cout << "*";
    //   }
    //   cout<<endl;
      
    // }

  //ALPHABET PALINDROME PYRAMID
//   5
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

  // int n;
  // cin>>n;
  // for(int row = 0; row < n; row++){
  //   int col;
  //   for(col = 0;col<row+1;col++){
  //     cout<<char(col+'A');
  //   }
  //   col = col -1;
  //   for(;col>=1;col--){
  //     cout<<char(col+'A'-1);
  //   }
  //   cout<<endl;

    
  // }

  

  
//FANCY PATTERN 1
//   5
// ******1******
// *****2*2*****
// ****3*3*3****
// ***4*4*4*4***
// **5*5*5*5*5**


// int n;
// cin >> n;

//   for(int row = 0; row < n; row++){
//     for(int col = 0; col < n-row+1; col++){
//       cout<<"*";
//     }
//     for(int col = 0; col < row+1; col++){
//       cout<<row+1;
//       if(col != row){
//         cout<<"*";
//       }
//     }
//     for(int col = 0; col < n-row+1; col++){
//       cout<<"*";
//     }
    
//     cout<<endl;

    
//   }

//SOLID HALF DIAMOND
// 5
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

  
  // int n;
  // cin>>n;
  // for(int row = 0; row<n;row++){
  //   for(int col = 0; col<row+1;col++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }
  // for(int row = 0; row<n-1;row++){
  //   for(int col = 0; col<n-row-1;col++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
    
  // }

//FANCY PATTERN #3

  // int n;
  // cin>>n;
  // for(int row = 0; row < n; row++){
  //     int col;
  //     for(col = 0;col<row+1;col++){
  //       if(col == 0){
  //         cout<<"*";
  //       }
  //       else{
  //         cout<<col;
  //       }
        
  //     }
      

    

    
  //   cout<<endl;


    
  // }
  int n;
  cin>>n;
  for(int row = 0; row < n; row++){
    int col;
    for(col = 0;col<(row+1)/2;col++){
      cout<<(col+1);
    }
    col = col -1;
    for(;col>=1;col--){
      cout<<(col);
    }
    cout<<endl;


    

    
  }



  
}
