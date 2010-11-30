
//Drupal.behaviors.hideNotification = function() {
$(document).ready(function(){
  //$('.view-notification-block').hide();
  //$('.view-notification-block').fadeIn(3000);
  $('.view-notification-block a.flag').click(function() {
    $('.view-notification-block').hide(2000);
  });    
  return false;
});
//}