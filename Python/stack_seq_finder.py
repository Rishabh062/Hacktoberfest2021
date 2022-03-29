def stack_sequence(pushes:list , pops:list)->list:
    '''
    Function to check whether the given sequence of pop can be achieved from the given push sequences 
    in a stack. eg- push -> 1 2 3 4 5 , pop -> 3 2 1 5 4 is a valid sequence and the output will be 
    ['Push[1]', 'Push[2]', 'Push[3]', 'Push[4]', 'Push[5]', 'Pop[5]', 'Pop[4]', 'Pop[3]', 'Pop[2]', 'Pop[1]']
    '''
    stack = []
    sequence=[]
    i = 0
    l = 0
    for n in pushes:
        stack.append(n)
        sequence.append(f"Push[{n}]")
        l += 1
        while l and stack[-1] == pops[i]:
            sequence.append(f"Pop[{stack.pop()}]")
            i += 1
            l -= 1
    return(sequence)

if __name__ == "__main__":
    ''''
    Input format -> 1st line : integers with space
                    2nd line : integers with space
                    length(pushes)==length(pops)
    Output format -> Valid push and pops of the stack to achieve the pop sequence 
                    if no valid sequence found print The sequences isn't valid
    '''
    pushes = list(map(int,input().split()))
    pops = list(map(int,input().split()))
    output = stack_sequence(pushes,pops)
    if len(output)==2*len(pushes):
        print("")
        for i in output:
            print(i,end=" ")
    else:
        print("The sequences isn't valid")