//BUILD A CLASS NAMED STUDENTS AND DECLARE THE DATA OF THOSE CLASSSTUDENTS SUCH AS 'NAME','MARKS','ROLL','SECTION'.


#include <stdio.h>
#include <string.h>
int main (){
    typedef struct students{
        int marks;
        int roll;
        char name[50];
        char sect_ion;
    } students;

    students arr [3];
    arr[0].marks=45;
    arr[0].roll = 15;
    arr[0].sect_ion='A';
   strcpy (arr[0].name,"ARPAN");

    arr[1].marks=89;
    arr[1].roll = 67;
    arr[1].sect_ion='A';
   strcpy ( arr[1].name,"VISHAL");

    arr[2].marks=54;
    arr[2].roll = 51;
    arr[2].sect_ion='A';
   strcpy ( arr[2].name,"MITCHEEL");

   for (int i=0;i<3;i++){
    printf("Name \t%s\n",arr[i].name);
    printf("Marks\t%d\n",arr[i].marks);
    printf("Roll\t%d\n",arr[i].roll);
    printf("Section\t%c\n",arr[i].sect_ion);
   }
   return 0;
}