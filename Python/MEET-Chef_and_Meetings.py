# cook your dish here
def to24hrs(time):
  if time[-2:] == "AM" and time[:2] == "12":
    time = "00" + time[2: -2]
  elif time[-2: ] == "AM":
    time = time[: -2]
  elif time[-2: ] == "PM" and time[: 2] == "12":
    time = time[: -2]
  else:
    time = str(int(time[: 2]) + 12) + time[2: 5]
  return int(time.replace(":", ""))

try:
    t = int(input())
    while t:
        res = ""
        time = input()
        time = to24hrs(time)
        n = int(input())
        while n:
          r = input()
          l = r[:8]
          r = r[9:]
          l = to24hrs(l)
          r = to24hrs(r)
          if l <= time <= r:
            res += "1"
          else:
            res += "0"
          n -= 1
        print(res)
        t -= 1
        
except:
    pass