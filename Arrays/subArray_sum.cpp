import itertools dates =[] ratings =[] def menu() : print("The services for rating a score(1-10) are:\n")
    print("1. Savings\n2. Current\n3. Loan\n4.All of the above\n")
        ch = eval(input("Enter your choice(1-4)= "))
            rating(ch)

                def rating(ch) : if (ch == 1) : s = eval(input("Enter score for saving= "))
                    c = 0 l = 0 elif (ch == 2) : c = eval(input("Enter score for current= "))
                        l = 0 s = 0 elif (ch == 3) : l = eval(input("Enter score for loan= "))
                            c = 0 s = 0 else : s = eval(input("Enter score for saving= "))
                                c = eval(input("Enter score for current= "))
                                    l = eval(input("Enter score for loan= "))

                                                 total = s + c + l ratings.append(total)

                                                     n = 'y' while (n != 'n') : d = input("Enter the date= ")
                                                                                              dates.append(d)
                                                                                                  menu()
                                                                                                      n = input("You want to enter ratings again?(y/n)= ")

                                                                                                          print("Date: Ratings:")

                                                                                                              for (i, j) in zip(dates, ratings) : print(i, " ", j)
