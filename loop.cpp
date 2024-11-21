/*#include <iostream>

using namespace std;

int main(){
    int choice;{

    //Display the menu

    cout << "1. Rice - 500Frs\n";
    cout << "2. Egg - 300Frs\n";
    cout << "3. Beans - 200Frs\n";
    cout << "4. Eru - 400Frs\n";
    cout << "5. Fish - 600Frs\n";
}
    cout << "Enter the number of your choice (1-5) : ";

    if choice ==1;{
        cout << "You have command rice";
    }


return 0;
}*/



//CORRECTION

/*#include <iostream>
using namespace std;

int main() {
    int select;
    printf("Cafe Me\n");
    printf("1.Egg\n 2.Fish\n 3.bread\n 4.Beans");
    printf("\n");
    printf("Select the number of the menu: ");
    scanf("%d",&select);
    if(select==1){
        printf("You have commanded egg");
    }else if(select==2){
        printf("You have commanded fish");
    }else if(select==3){
        printf("You have commanded bread");
    }else if (select==4){
        printf("You have commande beans");
    }else{
        printf("This is not an option");
    }

return 0;
}*/


//loop


#include <iostream>
using namespace std;

int main() {

    int sum =0;
    for (int i=1; i<=100; i+=2){
        sum +=i;
    }


        printf("%d ", sum);


    return 0;
}
