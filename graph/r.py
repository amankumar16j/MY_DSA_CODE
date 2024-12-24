def count_offer_periods(sales):
    n = len(sales)
    offer_count = 0

    for i in range(n - 2):

        for j in range(i + 2, n):
 
            mins = min(sales[i], sales[j])
            
         
            maxs = max(sales[i + 1:j])
            
          
            if mins > maxs:
                offer_count += 1
    
    return offer_count

# Test case
sales = [1,6,3,5,8,3,5]
print("Number of offer periods:", count_offer_periods(sales))
