// 1. Create a database named `Library` and a collection named `Books` with at least 4 fields.
    
// use Library

db.createCollection('Books')

// 2. Insert at least 10 records into the `Books` collection with details about various books.

db.Books.insertMany([
    {
        "_id": ObjectId("5f8a4c261c9d4400001a4af7"),
        "title": "The Great Gatsby",
        "author": "F. Scott Fitzgerald",
        "genre": "Classic",
        "year": 1925
    },
    // Add 9 more book records with various details
])

// 3. Retrieve and display all the documents inserted into the `Books` collection

db.Books.find()

// 4. Update the publication year of a book in the`Books` collection based on a given condition.

db.Books.updateOne(
    { "title": "The Great Gatsby" },
    { $set: { "year": 1930 } }
)

// or

db.Books.updateOne(
    { "_id": ObjectId("5f8a4c261c9d4400001a4af7") },
    { $set: { "year": 1930 } }
)

// 5. Find and display records in the`Books` collection based on a specific criterion, e.g., genre.

db.Books.find({ "genre": "Classic" })

// 6. Retrieve and display the documents in the`Books` collection, sorted by publication year in ascending order.

db.Books.find().sort({ "year": 1 })

// 7. Delete a record from the `Books` collection based on a given condition.

db.Books.deleteOne({ "title": "The Great Gatsby" })

// or

db.Books.deleteOne({ "_id": ObjectId('65cc4fc4d84b480fa9ffd637') })