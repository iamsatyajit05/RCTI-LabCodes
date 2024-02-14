// 1. Create a database named `OnlineStore` and a collection named `Products` with at least 4 fields.
    
// use OnlineStore

db.createCollection('Products')

// 2. Insert at least 10 records into the `Products` collection with various product details.

db.Products.insertMany([
    {
        "name": "Smart TV",
        "price": 799.99,
        "category": "Electronics",
        "stock": 20
    },
    {
        "name": "Coffee Maker",
        "price": 49.99,
        "category": "Kitchen Appliances",
        "stock": 50
    },
    {
        "name": "Running Shoes",
        "price": 89.99,
        "category": "Fashion",
        "stock": 30
    },
    {
        "name": "Gaming Console",
        "price": 399.99,
        "category": "Electronics",
        "stock": 15
    },
    {
        "name": "Digital Camera",
        "price": 299.99,
        "category": "Electronics",
        "stock": 25
    },
    {
        "name": "Desk Chair",
        "price": 129.99,
        "category": "Furniture",
        "stock": 10
    },
    {
        "name": "Backpack",
        "price": 39.99,
        "category": "Fashion",
        "stock": 40
    },
    {
        "name": "Toaster",
        "price": 29.99,
        "category": "Kitchen Appliances",
        "stock": 35
    },
    {
        "name": "Bluetooth Speaker",
        "price": 59.99,
        "category": "Electronics",
        "stock": 18
    },
    {
        "name": "Yoga Mat",
        "price": 19.99,
        "category": "Fitness",
        "stock": 45
    }
])

// 3. Retrieve and display all the documents inserted into the `Products` collection

db.Products.find()

// 4. Update the price of a product in the `Products` collection based on a given condition.

db.Products.updateOne(
    { "name": "Smart TV" },
    { $set: { "price": 1299.99 } }
)

// or

db.Products.updateOne(
    { "_id": ObjectId('65cc4fc4d84b480fa9ffd632') },
    { $set: { "price": 1299.99 } }
)

// 5. Find and display records in the `Products` collection based on a specific criterion, e.g., category.

db.Products.find({ "category": "Electronics" }

// 6. Retrieve and display the documents in the `Products` collection, sorted by price in ascending order.
    
db.Products.find().sort({ "price": 1 })

// 7. Delete a record from the `Products` collection based on a given condition.
    
db.Products.deleteOne({ "name": "Yoga Mat" })

// or
    
db.Products.deleteOne({ "_id": ObjectId('65cc4fc4d84b480fa9ffd637') })