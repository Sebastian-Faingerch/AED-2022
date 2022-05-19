#include <cassert>
#include <iostream>
#include <string>
#include <cstring>

using namespace std::literals;

int main (){


    
    //TIPO DE DATO: DOUBLE

    assert(0.0 - 1.0 == -1.0);      
    assert(4.9 != 3.2 - 1.8);       
    assert(170.1 <= 199.78);        
    assert(13.5 >= 6.7);            
    assert(4.5 == 1.5 * 3.0 );      
    assert(6.8 == 17 / 2.5);        
    assert(0.0 == 0. and .0 == 0.0 and 0.0 == 0.0f and 0.0 == 0e1);  //f = float 

    assert(0.9 != 0.3 + 0.3 + 0.3);
    assert(1.0 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); 
    
    

//-------------------------------------------------------------------------------------------------------------------------------------------------------

    //TIPO DE DATO: INT
    

    assert(0 == -1 + 1);          
    assert(6 != 7 - 2);         
    assert(1 >= -2);              
    assert(-10 <= 9);             
    assert(9== 3 * 3 );           
    assert(-5 == 15 / -3 );          
    assert(1 == 11 % 2 );         
  



//-------------------------------------------------------------------------------------------------------------------------------------------------------

    //TIPO DE DATO: unsigned (u)

   assert(0u==0u);
   assert(0u==15u%3u);
   assert(5u==3u+2u);
   assert(9999999999 == 9999999998 + 1);
   assert(1400 <= 1500);
   assert(8000 >= 1000);


//-------------------------------------------------------------------------------------------------------------------------------------------------------

    //TIPO DE DATO: BOOL
   
    assert(true);                                 
    assert(false or true);                        
    assert(true and true);                   
    assert(not false);                       
    assert(false != true and true or false);
    assert(false != (5+5.0==10));                             
    assert(true == true);
    assert(true == (true and true) and false or true );


//-------------------------------------------------------------------------------------------------------------------------------------------------------

    //TIPO DE DATO: CHAR

    assert('A' != 'B');  
    assert('A' <= 'B');           
    assert('A'== 65);
    assert('B'== 'A' + 1);
    assert(131 == 'A' + 'B');      
    assert(1 == 'B' % 'A');                     
    assert('8' != '1' + '7');      
    assert( 1 == 'B' - 'A');
    assert( 'a'!= 'A');
    assert('a'- 32 == 'A');
    

//-------------------------------------------------------------------------------------------------------------------------------------------------------

    //TIPO DE DATO: STRING
    
  
    assert( "A"s == "A"s );
    assert( "banfield"s == "ban"s + "field"s );
    assert( 8 == "banfield"s.length());             
    assert( "aaa"s >= "aa"s);
    assert( "1" <= "2" );
    assert( "AA"s < "AB"s );
    assert( "hola"s == "hola"s );


    std::cout << "Todo correcto";
    
}
