void printCourseList(const map<string, Course>& hashTable) {
    // Iterate through the elements in the hashtable using a range-based for loop
    for (const auto& pair : hashTable) {
        // Extract the Course object from the current key-value pair
        const Course& course = pair.second;

        // Print the course number and title to the console
        cout << course.courseNumber << ", " << course.courseTitle << endl;

    }
}