# include <iostream>
# include <locale>
using namespace std; 

int main (){
    setlocale (LC_ALL, "uk_UA");
    char name[20];
    int hours;
    float rate,salary;

    printf("Введіть ім'я працівника:");
    scanf("%s", name);
    printf("Введіть кількість відпрацьованих годин:");
    scanf("%d", &hours);
    printf("Введіть погодинну ставку:");
    scanf("%f", &rate);

salary=hours*rate;

printf("Працівник %s отримав зарплату %.2f грн", name, salary);
    
return 0;
}