def gcd(a,b):

	if (b==0):
		return a
	else:
		return gcd(b,a%b)


def Main():
    t = int(raw_input())
    while t:
        a = int(raw_input())
        b = int(raw_input())
        r = gcd(a,b)
        print r
        t =t -1;
if __name__=='__main__':
    Main()
