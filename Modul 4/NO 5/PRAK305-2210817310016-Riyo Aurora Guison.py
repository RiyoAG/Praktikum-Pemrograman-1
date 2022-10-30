d=int(input())
hari=int(d/84600)
jam=int((d/3600) % 24)
menit=int((d/60) % 60)
detik=int(d % 60)
if(d <=3600):
    print("%.2d:%.2d:%.2d"%(jam,menit,detik))
elif(d >=3600 and d<84600):
    print("%.2d:%.2d:%.2d"%(jam,menit,detik))
elif(d >=84600):
    print("%d hari %.2d:%.2d:%.2d"% (hari,jam,menit,detik))