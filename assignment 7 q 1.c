def probability(x):
    x1 = input ('dice configuration') 
    x2 = input ('numeric value')
    
    if(x2[6:24:6]):
    
        "dice configurations"
    "1d6 = 6, 2d6 = 12, 3d8 = 24, 1d20 = 20"
   
    sum =  x2 * x1
    probability = sum/x2
    
    print(sum)
    print(probability)
    "print in fraction form"
    
    else(input != [6:24]):
        print('error: the input does not give acceptable configuration')
    
    return
    
    

