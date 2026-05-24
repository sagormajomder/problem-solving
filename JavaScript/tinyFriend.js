const tinyFriend = function (friends) {
   let length = friends[0].length;
   let index = 0;
   for (let i = 1; i < friends.length; i++) {
      if (length > friends[i].length) {
         length = friends[i].length;
         index = i;
      }
   }
   return friends[index];
};

console.log(tinyFriend(["Sagor", "Mehedi Hasan", "mim"]));
