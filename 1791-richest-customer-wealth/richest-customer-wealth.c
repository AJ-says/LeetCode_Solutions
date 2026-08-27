int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    
    int max = 0;
    int m = accountsSize;
    int* n = accountsColSize; 

    for(int i=0; i<m; i++)
    {
        int customerWealth = 0;
        for(int j=0; j<n[i]; j++)
        {
            customerWealth += accounts[i][j];
        }
        if(customerWealth > max)
            max = customerWealth;
    }

    return max;

}