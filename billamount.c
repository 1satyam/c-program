 #include<stdio.h>

 int main(){
    float total_amt,amt ,sub_total,discount_amt,tax_amt,qty,val,discount,tax;
    printf("\n Enter the quantity of item sold:");
    scanf("%f", &qty);
    printf("\n Enter the value of item:");
    scanf("%f",&val);
    printf("\n Enter the discount percentage:");
    scanf("%f",&discount);
    printf("\n Enter the tax:");
    scanf("%f",&tax);

    amt=qty*val;
    discount_amt=(amt*discount)/100.0;
    sub_total=amt-discount_amt;
    tax_amt=(sub_total*tax)/100.0;
    total_amt=sub_total+tax_amt;

    printf("\n\n\n ********************BILL**********************");
    printf("\nQuantity Sold:     %f",qty);
    printf("\nPrice per item:    %f",val);
    printf("\n________________________________________");
    printf("\nAmount:            %f",amt);
    printf("\nDiscount:         -%f",discount_amt);
    printf("\nDiscount Total:    %f",sub_total);
    printf("\nTax:              +%f",tax_amt);
    printf("\n________________________________________");
    printf("\nTotal Amount       %f",total_amt);
    return 0;

 }