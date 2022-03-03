int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    
    scanf("%d %d %d %d", &p, &d, &m, &s);
    
    int i, j, k;
    int total;
    total =0;
    j = 0;
    
    for(i=p; i>=m; i-=d){
    if(s>total){
    total += i;
    j++;
    }
    else 
    break;
    }
    
    while (s>total){
        total += m;
        if(s>total)
        j++;
    }
    
    return j;
}
