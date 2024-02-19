//Binary search
int ASList::findItem(ItemType item)
{
    // Binary search algorithm
    int low = 0;  // Low variables
    int high = length - 1; // High variables
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (Items[mid].compareTo(item) == RelationType::EQUAL)
            return mid; // Item at mid
        else if (Items[mid].compareTo(item) == RelationType::LESS)
            low = mid + 1; // Discard left half
        else
            high = mid - 1; // Discard right half
    }
    return -1;
}

/* Changes:
 - Low and high variables to keep track of the range.
 - Calculated mid index as the average of low and high.
 - Check if the item at the mid index is equal to i.
 - If i is greater than the item at mid, updated high to mid - 1 to search in
 the left half of the array.
 */