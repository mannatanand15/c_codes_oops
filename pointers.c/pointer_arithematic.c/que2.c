/* Kathir aims to create a program to determine the total ticket cost for an upcoming event, considering his age and the quantity of tickets he intends to buy.
The available ticket types are Basic (Rs. 150.0) and VIP (Rs. 300.0), each priced differently. The program should apply age-based discounts and utilize pointers for price calculations
Discount Calculation:
If Kathir's age is less than 18, he will receive a 10% discount on Basic tickets.
If Kathir's age is 18 or older, he will receive a 5% discount on VIP tickets.

Formulas Used: Total Cost = Discounted Price * Number of Tickets, where Discounted Price = Original Price - (Original Price * Discount Percentage/100)
Input format :
The first line of input consists of an integer representing Kathir's age.
The second line of input consists of an integer n, representing the number of tickets Kathir wants to purchase.
Output format :
The output displays "Rs." followed by the total cost of the tickets as a double-point value, rounded to two decimal places.
/* 

#include<stdio.h>
int main(){
    int age;
    double total;
    scanf("%d",&age);
    int n;
    scanf("%d",&n);
    totalcost(n,age,&total);
    printf("Rs.%.2f",total);
}

void totalcost(int n,int age, double *total){
    double price;
    if (age<18){
        //basic ticket with 10% discount
        price=150.0;
        price=price-(price*10/100);
    }
    if (age>=18){
        price=300.0;
        price=price-(price*5/100);
    }
    *total=price*n;
}
