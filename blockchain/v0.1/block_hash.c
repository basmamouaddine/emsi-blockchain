#include "blockchain.h"

/**
 * block_hash - computes hash of block
 * @block: pointer to block to hash
 * @hash_buf: buffer to store hash/digest
 * Return: pointer to buffer
 */
uint8_t *block_hash(block_t const *block,
		    uint8_t hash_buf[SHA256_DIGEST_LENGTH])
{
	sha256((int8_t const *)&(block->info), 4 + 4 + 8 + 8 + 32 + block->data.len, hash_buf);
	sha256((int8_t const *)&(block->info), 4 + 4 + 8 + 8 + 32 + block->data.len,
	       hash_buf);
	return (hash_buf);
}
