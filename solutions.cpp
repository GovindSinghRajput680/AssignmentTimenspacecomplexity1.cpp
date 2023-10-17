# Q 1 : This like a GP with CR = 1/2
      so 1 = n/(2^(p-1)) 
      so p = log n(nearly)
      so TC = O(log n)
# Q2: In this Q I think something is missing 
      because if we update by i/= i 
      Then loop will run only once(Independent to n).
      TC = O(1)
        
# Q 3: This like an AP with CD = k
       so  n = (p-1)*k
       so p = n/k (nearly)
       so TC = O(n)
#Q 4: This is as Q 1 
    This is forn a GP with CR = 2
    so n = 2^(p-1)
    so p = log n(nearly)
    so TC = O(log n)
#Q 5: So clearly lopp will run n times
      so TC = O(n)
#Q 6: Here no. of effective iteration = sum of n-1 natural numbers
      so TC =O(n^2)
