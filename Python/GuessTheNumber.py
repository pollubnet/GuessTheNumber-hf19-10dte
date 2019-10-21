from random import randint

def main():  
    n = randint(1, 100)

    w = False
    i = 0
    while w == False:    
        i += 1
        print("Podaj liczbe: ", end='')
        l = int(input())
        
        if l > n:
            print("Za duzo!")
        elif l < n:
            print("Za malo!")        
        else:        
            print("Wygrales!")
            print("Za ",i, " razem" )
            w = True

if __name__ == "__main__":
    main()