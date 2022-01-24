const month= prompt('Enter a month');
var days=31;
if(month==2){
  days-=3;
}else if((month<=7 && month%2==0) || (month>7 && month%2!=0)){
  days--;
}
console.log(`The number of days in this month are ${days}`);
