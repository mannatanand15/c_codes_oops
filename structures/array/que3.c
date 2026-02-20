/*Create a structure Customer to store the customer name, account number, and account balance of N customers. 



Write a program that performs the following operations:

Print the names of all the customers having a balance of less than Rs. 200. 
If the customer has more than Rs. 1000 in their account, add 3% as interest to the current balance and print the updated balance. 
*/
// You are using GCC
struct Customer {
    char name[50];
    int accountNumber;
    float accountBalance;
    //Type your code here
};

void printLowBalanceCustomers(struct Customer customers[], int n) {
    printf("Customers with balance less than Rs.200:\n");
    for(int i=0;i<n;i++){
        if(customers[i].accountBalance <200){
        printf("%s ",customers[i].name);
        }
    }
    printf("\n");
}

void addInterest(struct Customer *customer) {
         if(customer->accountBalance>1000){
        float update=customer->accountBalance+(0.03*customer->accountBalance);
        printf("Updated balance of %s: Rs.%.2f",customer->name,update);
        
    }
   
    
}
int main() {
    int n;
    scanf("%d", &n);

    struct Customer customers[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", customers[i].name);
        scanf("%d", &customers[i].accountNumber);
        scanf("%f", &customers[i].accountBalance);
    }

    printLowBalanceCustomers(customers, n);

    for (int i = 0; i < n; i++) {
        addInterest(&customers[i]);
    }

    return 0;
}
