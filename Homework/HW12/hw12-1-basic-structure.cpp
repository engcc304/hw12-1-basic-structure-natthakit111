/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    struct Person {
	    char  Name[20] ;
	    int   Age ;
	    int   Sex ;
	    float Score ;
	} ;
    
    Test case:
        Person A
        Name : 
            Mai
        Age : 
            24
        Sex : 
            M
        Score : 
            99.99

        Person B
        Name : 
            Mon
        Age : 
            21
        Sex : 
            F
        Score : 
            87.60

    Output:
        --| Person A Information |--
        Name : Mai (M)
        Age : 24 years old
        Score : 99.99 points
        --| Person B Information |--
        Name : Mon (F)
        Age : 21 years old
        Score : 87.60 points

*/
#include <stdio.h>

struct Person {
    char Name[ 20 ] ;
    int Age ;
    char Sex ;
    float Score ;
} ;

void printPersonInfo( struct Person person, int personNumber ) {
    printf( "--| Person %c Information |--\n", 'A' + personNumber ) ;
    printf( "Name: %s (%c)\n", person.Name, person.Sex ) ;
    printf( "Age: %d years old\n", person.Age ) ;
    printf( "Score: %.2f points\n", person.Score ) ;
}//end void

int main() {
    struct Person A, B ;

    
    printf( "Person A\n" ) ;
    printf( "Name: " ) ;
    scanf( "%s", A.Name ) ;
    printf( "Age: " ) ;
    scanf( "%d", &A.Age ) ;
    printf( "Sex (M/F): " ) ;
    scanf( " %c", &A.Sex ) ;  
    printf( "Score: " ) ;
    scanf( "%f", &A.Score ) ;

    
    printf( "\nPerson B\n" ) ;
    printf( "Name: " ) ;
    scanf( "%s", B.Name ) ;
    printf( "Age: " ) ;
    scanf( "%d", &B.Age ) ;
    printf( "Sex (M/F): " ) ;
    scanf( " %c", &B.Sex ) ;
    printf( "Score: " ) ;
    scanf( "%f", &B.Score );

    printf( "\nOutput:\n" ) ;
    printPersonInfo( A, 0 ) ;
    printPersonInfo( B, 1 ) ;

    return 0 ;
}//end function main
