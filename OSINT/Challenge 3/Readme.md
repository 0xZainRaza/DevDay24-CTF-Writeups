# RabbitHole

## Description
head over to the acm cys instagram page and see if you can find out something interesting

### Author 
Abubakr Wamiq


When you head over to the instagram page of acm cys you can see a strange comment made by AbubakrWamiq under the devday CTF post, Pufd3b1W2k6wkYGWmxuzFhBuKMyq948HWMtSHLVpZQGRyqrUfVKPaCPN.
It looks like some base64 string, so we put it in cyberchef to find out.


![image](https://github.com/0xZainRaza/DevDay24-CTF-Writeups/assets/121969132/ed4366a2-33e0-4bd3-9d98-222e7b22d0cb)


Turns out it is a base58 string and it decodes to a link to a github repository, so lets see what the repository holds.


![image](https://github.com/0xZainRaza/DevDay24-CTF-Writeups/assets/121969132/ceff7987-48a0-47db-9aeb-1c7fa90e52bb)


Turns out it has three folders and a file with two subfolders and all of them have random data and text that seems irrelevant.
When going through the May be this one? file there are two strings that can be found at the end of line 5


![image](https://github.com/0xZainRaza/DevDay24-CTF-Writeups/assets/121969132/03215cc8-951e-4d82-9b0a-d109de062891)



Lets put them both in cyberchef


![image](https://github.com/0xZainRaza/DevDay24-CTF-Writeups/assets/121969132/c7d599d2-fe2d-4137-bd52-a5704658f2bc)


The string is a link to repository, so when we visit this repo one thing that seems important is the CTF writeups repo which has another large string which decodes to a hint 


![image](https://github.com/0xZainRaza/DevDay24-CTF-Writeups/assets/121969132/94786778-0c97-41f7-a294-0ce5efacb4ae)


![image](https://github.com/0xZainRaza/DevDay24-CTF-Writeups/assets/121969132/e3c9dbc8-a428-4548-8f2f-e9b6d6a21f18)


The hint has two important words "sick" and "Rabbit Hole" we move back to the Rabbit hole repo and move to the Maddison folder, there we can see a lot of csv files and among them one file may catch your attention hospital.csv which is where a sick person goes. So now we can see a list of patients int he csv so we need to narrow down our options so we use the second keyword in the search bar and luckily we can see a patient named Rabbit hole and we can also see an unusual doctor id for Rabbit hole. Seems like a base64 string so lets put it in cyberchef


![image](https://github.com/0xZainRaza/DevDay24-CTF-Writeups/assets/121969132/5e0ea144-b491-4f92-b6db-645e76f66441)


![image](https://github.com/0xZainRaza/DevDay24-CTF-Writeups/assets/121969132/267a1606-f900-49c1-8aae-e940233dce80)


The link is a shortened url that leads to a rick roll meme template and when you sort the comments by newest first you can find a strange comment that looks like another string which is the real flag when you put it in cyberchef 


![image](https://github.com/0xZainRaza/DevDay24-CTF-Writeups/assets/121969132/0b7703d6-3eca-4580-a7e4-d876777c6084)


lets put this string in cyberchef and see if it works and BINGO we found the flag


![image](https://github.com/0xZainRaza/DevDay24-CTF-Writeups/assets/121969132/7f24c291-8601-4322-a7a6-198716c83342)


# Flag
_**DD24{th1s_is_th3_r33l_fl4g}**_
