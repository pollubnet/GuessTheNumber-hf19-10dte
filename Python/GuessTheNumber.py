from random import randint

def main():  
    n = randint(1, 100)

    w = False

    while w == False:    
        print("Podaj liczbe: ", end='')
        l = int(input())
        
        if l > n:
            print("Za duzo!")
        elif l < n:
            print("Za malo!")        
        else:        
            print("Wygrales!")
            w = True

if __name__ == "__main__":
    main()