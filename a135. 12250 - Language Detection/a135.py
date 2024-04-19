a = {}
a["HELLO"] = "ENGLISH"
a["HOLA"] = "SPANISH"
a["HALLO"] = "GERMAN"
a["BONJOUR"] = "FRENCH"
a["CIAO"] = "ITALIAN"
a["ZDRAVSTVUJTE"] = "RUSSIAN"
b = input()
w = 1
while (w and b != '#'):
    if b in a:
        print("Case %s: %s" % (w, a[b]))
    else:
        print("Case %s: UNKNOWN"%(w))
    w += 1
    b = input()
