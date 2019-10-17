def gold_max_1(gold,n):
    gold_table = [[0 for i in range(n)] for j in range(n)]

    for col in range(n-1,-1,-1):
        for row in range(n):
            #print(col)
            if (col == n-1):
                right = 0 
            else:
                right = gold_table[row][col + 1]

            if (row == 0 or col == n-1):
                right_up = 0 
            else: 
                right_up = gold_table[row-1][col + 1]

            if (row == n - 1 or col == n - 1):
                right_down = 0 
            else:
                right_down = gold_table[row+1][col+1]

            gold_table[row][col] = max([right,right_down,right_up]) + gold[row][col]
            #print([right,right_down,right_up])

    path = gold_table[0][0]
    for i in range(n):
        path = max(path,gold_table[i][0])
    return path

def gold_max_2(gold,n):
    gold_table = [[0 for i in range(n)] for j in range(n)]

    for col in range(n):
        for row in range(n):
            #print(col)
            if (col == n-1):
                right = 0 
            else:
                right = gold_table[row][col + 1]

            if (row == 0 or col == n-1):
                right_up = 0 
            else: 
                right_up = gold_table[row-1][col + 1]

            if (row == n - 1 or col == n - 1):
                right_down = 0 
            else:
                right_down = gold_table[row+1][col+1]

            gold_table[row][col] = max([right,right_down,right_up]) + gold[row][col]
            #print([right,right_down,right_up])

    path = gold_table[0][n-1]
    for i in range(n):
        path = max(path,gold_table[i][n-1])
    return path

gold  = []
n = int(input())
for i in range(n):
    l = list(map(int,input().split()))
    gold.append(l)

print(gold_max_1(gold,n) == gold_max_2(gold,n)) 
	 
