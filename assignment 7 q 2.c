def combinatorics(x):
    x = input(str(3))
    
    "combinatorics" 
    "[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,2,1],[3,1,2]"
    
    for i in range(3):
        for j in range(3):
            for k in range(3):
                
                if(i != j and j != k and i != k):
                    print (x[i], x[j], x[k])
    
    
    return