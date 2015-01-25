#include "llistdbl.h"
#include <cstdlib>

LListDbl::LListDbl()
{
  head_ = NULL;
  tail_ = NULL;
  size_ = 0;
}

LListDbl::~LListDbl()
{
  clear();
}

bool LListDbl::empty() const
{
  return size_ == 0;
}

int LListDbl::size() const
{
  return size_;
}

/**
 * Complete the following function
 */
void LListDbl::insert(int loc, const double& val)
{


  //adds if empty
  if(size == 0){
    Item* temp = new Item;
    temp->val = val;
    temp->prev = NULL;
    temp->next = NULL;
    head_= temp;
    tail_=temp;
  }
  
  //returns immediately if loc is not within bounds 
  else if(loc<0 || loc>size)
    return;
  
  //adds to front; this is when loc is 0;
  else if(loc == 0){
    Item* temp = new  Item;
    temp ->val = val;
    temp->next = head_;
    temp->prev = NULL;
    head_->prev = temp;
    head_=temp;
  }

  //adsd to back; this is when loc is size;
  else if(loc == size){
    Item* temp = new Item;
    temp->val = val;
    temp->next= NULL;
    temp->prev = tail;
    tail_->next = temp;
    tail = temp;
  }

  /*adds to middle; everythinig else
  this works by pushing the old item that was
  at the location forwards(closer to head)*/
  else{

    Item* olditem = getNodeAt(loc);
    Item* newitem = new Item;
    newitem->val = val;
    newitem->prev = olditem;
    newitem->next = olditem->next;
    olditem->next = newitem;


  }

}

/**
 * Complete the following function
 */
void LListDbl::remove(int loc)
{



}

void LListDbl::set(int loc, const double& val)
{
  Item *temp = getNodeAt(loc);
  temp->val = val;
}

double& LListDbl::get(int loc)
{
  Item *temp = getNodeAt(loc);
  return temp->val;
}

double const & LListDbl::get(int loc) const
{
  Item *temp = getNodeAt(loc);
  return temp->val;
}

void LListDbl::clear()
{
  while(head_ != NULL){
    Item *temp = head_->next;
    delete head_;
    head_ = temp;
  }
  tail_ = NULL;
  size_ = 0;
}


LListDbl::Item* LListDbl::getNodeAt(int loc) const
{
  Item *temp = head_;
  if(loc >= 0 && loc < size_){
    while(temp != NULL && loc > 0){
      temp = temp->next;
      loc--;
    }
    return temp;
  }
  else {
    //throw std::invalid_argument("bad location");
    return NULL;
  }
}
