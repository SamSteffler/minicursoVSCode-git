def main():
    val = [0,0]

    val[0] = int(input("primeiro valor: "))
    val[1] = int(input("segundo valor: " ))

    print(f'soma : { (val[0])   + (val[1])   }\n'
          f'dif. : { (max(val)) - (min(val)) }\n'
          f'media: { (val[0]    + val[1])/2  }\n'
          f'mod. : { (max(val)  % min(val))  }\n')

if __name__ == "__main__":
    main()