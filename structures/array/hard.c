// You are using GCC
struct DEP_STORE {
    char store_name[50];
    char store_address[100];
    char phone_no[15];
    //type your code
};

struct STORE_ITEM {
    int item_number;
    char item_name[50];
    int available_qty;
    float item_price;
    // Type your code
};

void generateReport(struct DEP_STORE store, struct STORE_ITEM items[], int n) {
    float total=0.0;
    printf("Store Name: %s\n",store.store_name);
    printf("Store Address: %s\n",store.store_address);
    printf("Phone Number: %s\n",store.phone_no);
    //separated by tab spaces
    printf("Item Number\tItem Name\tAvailable Quantity\tItem Price\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%d\t%.2f\n",items[i].item_number,items[i].item_name,items[i].available_qty,
        items[i].item_price);
        total+=items[i].available_qty*items[i].item_price;
    }
    printf("\nTotal Item Value: Rs. %.2f\n",total);
}

int main() {
    struct DEP_STORE store;

    // Read store details
    scanf(" %[^\n]s", store.store_name);
    scanf(" %[^\n]s", store.store_address);
    scanf("%s", store.phone_no);

    int numItems;
    scanf("%d", &numItems);

    struct STORE_ITEM items[numItems];

    // Read item details
    for (int i = 0; i < numItems; i++) {
        scanf("%d", &items[i].item_number);
        scanf(" %[^\n]s", items[i].item_name);
        scanf("%d", &items[i].available_qty);
        scanf("%f", &items[i].item_price);
    }

    // Generate report
    generateReport(store, items, numItems);

    return 0;
}
