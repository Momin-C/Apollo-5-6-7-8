# Apollo 5, 6, 7, 8..

A submission for Hack the North 2023 that makes playing guitar easier for beginners and disabled people.

## 💡 Inspiration 💡
As the Barbie movie has taught us, every day people are forced to listen to their friends and significant others attempt to play music for them, mainly on guitar, which can be received in a variety of ways depending on their skill level and confidence. Our goal is to make sure nobody is ever badly affected by a similar situation again, by making everyone better players. It was a huge point in my piano education that I tried to perfect each hand's work separately before putting them together, which worked wonders! Unfortunately, nobody learns guitar in the same way. Apollo 5, 6, 7, 8… (the name is inspired by the greek god of music, space mission style-naming, and the frequently said countdown before songs) strums for you, so you can focus on chord technique, posture, and more, allowing you to perfect the first vital parts of a song before attempting to work on another. 

## 🤳 What it does 🤳
Apollo 5,6,7,8 is a hardware project that automatically strums the guitar. When you input a rhythm for it to follow (up, up, down, up), as well as the beats per minute of the guitar, Apollo starts auto-strumming so you can focus on fretting and chord shapes (holding strings down). It also features a drone, which flies in front of the user allowing you to see how you look when playing (posture, technique, etc). 

## 🛠 How we built it 🛠
This project is mainly a hardware project with some mechanical design. We used two servo motors manipulating different axes, one for the strumming motion and another to bring the pick up when the rhythm does not require it. The software side of this project involves coding an ESP32 microcontroller to break down the rhythm and calculate time needed for each strum. The most important part was making sure it can do complex strumming (more than down up down up) by manipulating the axis that had the guitar pick attached.

## ⚠️ Challenges we ran into ⚠️
One of the main challenges we ran into regarded the mechanical aspect of the project. It was challenging to make the strumming arm hit the strings properly at the right height and angle. The open strings correspond to the following notes: EADGBE, and the first E string has a larger diameter than the rest. We frequently had problems making sure the pick did not get stuck there. Carefully adjusting arm height was the way to get around this. Another issue we ran into was regarding one of our servo motors, which randomly started vibrating. We managed to fix this by just switching out the motor. 

## 🏅 Accomplishments that we're proud of 🏅
We're proud of creating a successful guitar strummer that can play the strums for someone trying to learn the guitar. We're also proud of how we managed to incorporate mechanical, electrical and software design into one project! Finally, we’re proud that we could incorporate complex strumming patterns for the project, for it to be useful, it needed to sound good and match the rhythm and keep time with different songs. This was the hardest part and we’re really happy to say we were able to get it done.

## 🧠 What we learned 🧠
We learned how to combine the mechanical, electrical and software components successfully. We also learned how to program the ESP32 microcontroller, since most of our team had never worked with this board before. Additionally, two of our members learned much more about guitar and the basic technique of playing through completing this project. 

## 🚀 What's next for Apollo 5,6,7,8 🚀
We have a lot of things planned for Apollo 5,6,7,8 and started to implement but weren’t able to finish. The first is to add web scraping and a UI so that users can get the strumming pattern and bpm to any song they would like from the internet instead of having to implement that themselves. We'd also like to implement strumming in the form of plucking, which is another way to play the guitar. Moving over to have a version of the product that focuses on chord shape would also be a future improvement. Eventually, we would also like to add AI/CV feedback from our drone on the users playing technique, having it zoom in on their fretting hand, and if possible, analyzing audio to give further feedback on the user’s playing. Finally, we would like to use a 3D printed and more sturdy arm to hold our guitar pick, rather than the more makeshift solution we currently have.