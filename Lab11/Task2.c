#include <stdio.h>

struct Product{
    int id;
    char name[50];
    char category[30];
    float price;
    int stock;
};

void displayProductDetails(struct Product p){
    float finalPrice = p.price - (p.price * 0.05f);
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Stock: %d\n", p.stock);
    printf("Final Price after 5%% discount: %.2f\n\n", finalPrice);
}

int main(){
    struct Product p1 = {101, "Laptop", "Electronics", 150000.0f, 15};
    struct Product p2 = {102, "Headphones", "Accessories", 5000.0f, 40};
    struct Product p3 = {103, "Sofa", "Furniture", 18000.0f, 8};
    displayProductDetails(p1);
    displayProductDetails(p2);
    displayProductDetails(p3);

    return 0;
}
